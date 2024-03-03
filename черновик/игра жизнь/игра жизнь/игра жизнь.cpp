#include <iostream>

#include <fstream>

#include <windows.h> <cstdlib>
//#include <unistd.h>       


char dead = 45;      //символ мертвой клетки
char alive = 42;     //символ живой клетки


char** create_arr(int rows, int columns) {                          // получает размер и создает массив
    char** arr = new char* [rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new char[columns]();
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) { arr[i][j] = dead; }    // заполняет массив мертвыми клетками.
    }
    return arr;
}
bool print_gen(char** arr, int rows, int columns, int generation) {      // получает массив, его размеры и номер поколения.     
    int alive_count = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << arr[i][j] << " ";                               // выводит массив на экран.                    
            if (arr[i][j] == alive) { alive_count++; }
        }
        std::cout << std::endl;
    }
    std::cout << "Generation: " << generation << ".  " << "Alive cells: " << alive_count << std::endl;     // выводит на экран номер поколения и количество живых клеток.    
    if (alive_count == 0) { return false; }                                                  // возвращает информацию о наличии живых клеток.
    else { return true; }
}

int neighbors(char** arr, int x, int y, int rows, int columns) {                 // получает массив координаты клетки и размер массива.
    int count = 0;                                                               // количество живых соседей.
    for (int i = x - 1; i < rows && i < x + 2; i++) {
        for (int j = y - 1; j < columns && j < y + 2; j++) {
            if (i >= 0 && j >= 0) {
                if (arr[i][j] == 42) { count++; }
            }
        }
    }
    if (arr[x][y] == 42) { count--; }                                           // проверяемую клетку вычеркиваем из количества живых соседей. 
    return count;

}
void delete_two_dim_array(char** arr, int rows) {                               //удаляет массив. 
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;
}

int main() {
    std::ifstream data("data.txt");                                              //открываем файл первого поколения.
    if (data.is_open()) {                                                        // если файл открылся начинаем игру
        int rows;                                                                // Количество строк поля,
        data >> rows;                                                            // считываем из файла.
        int columns;                                                             // Количество столбцов,
        data >> columns;                                                         // считываем из файла.
        char** previous_gen = create_arr(rows, columns);                         // Создаем массив для предыдущего поколения
        char** next_gen = create_arr(rows, columns);                             // Создаем массив для следующего поколения
        int generation = 1;                                                      // Начальное количество поколенй
        int i_data, j_data;                                                      // Переменые для координат живых клеток считываемые из файла
        while (!data.eof()) {                                                    // считываем из файла координаты живых клеток
            data >> i_data;
            data >> j_data;
            if (i_data < rows and j_data < columns) {                            // Проверяем координаты
                previous_gen[i_data][j_data] = alive;                            // по координатом делаем клетку живой
            }
            else { std::cout << "Error. cell coordinates outside the field"; }
        }
        bool there_are_live = print_gen(previous_gen, rows, columns, generation);      // переменная наличия живых клеток 
        bool changes = true;                                                           // переменная изменений между поколениями
        while (changes == 1 && there_are_live == true) {                                // цикл вычесления следующего поколения запускается если  
            //  были изменения предыдущего поколения и есть живые клетки 
            changes = false;
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < columns; j++) {
                    int count = neighbors(previous_gen, i, j, rows, columns);                // пробегаем по предыдущему поколению и запрашиваем количество живых соседей
                    if (previous_gen[i][j] == dead && count == 3) {                          // если клетка была мертва и имеет 3 живых сосде то
                        next_gen[i][j] = alive;                                              //   в следующем поколении оживет 
                        changes = true;                                                      // изменения произошли
                    }
                    else if (previous_gen[i][j] == alive && (count == 3 || count == 2)) {       // если клетка была жива и имеет 2 или 3 живых соседа то 
                        next_gen[i][j] = alive;                                                 //   остается живой   
                    }
                    else if (previous_gen[i][j] == alive && (count != 3 && count != 2)) {       // если клетка была живой и количество её соседей меньше 2 или больше 3 то
                        next_gen[i][j] = dead;                                                  //   она умирает
                        changes = true;                                                         // изменения произошли                             
                    }
                }
            }
            //std::system("clear");                                                         // отчищаем экран консоли  для Repl.it                             
            system("cls");                                                              // для visual

            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < columns; j++) {                                         // пробегаемся по массивам и 
                    previous_gen[i][j] = next_gen[i][j];                                    //  в предыдущее поколение записываем следующее
                }
            }
            if (changes == true) { generation++; }                                          // если изменения в новом поколении были то прибавляем счетчик поколений
            there_are_live = print_gen(next_gen, rows, columns, generation);                //проверяем наличие живых клеток в новом поколении заоно выводим его на экран
           // sleep(1);       // задержка для Repl.it
            Sleep(500);    // задержка для visual
        }
        if (changes == false && there_are_live == true) { std::cout << std::endl << "The world has stagneted.Game over"; }       // причины конца игры
        else { std::cout << std::endl << "All cells are dead. Game over"; }
        delete_two_dim_array(previous_gen, rows);                                           // удоляем массивы
        delete_two_dim_array(next_gen, rows);
    }
    else { std::cout << "Error: data file not found"; }                                      // если не найден файл первого поколения 
}
