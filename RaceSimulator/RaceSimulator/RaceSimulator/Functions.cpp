#include "Functions.h"

std::string get_RacerName(int type) {
    switch (type) {
    case 1: return "�������-���������"; break;
    case 2: return "�����"; break;
    case 3: return "�������"; break;
    case 4: return "�������"; break;
    case 5: return "����"; break;
    case 6: return "�������-���������"; break;
    case 7: return "�����-�������"; break;
    case 8: return "��������� �����������"; break;
    default: return "����������� ���";
    }
};

std::string get_RaceName(int type) {
    switch (type) {
    case 1: return "����� ��������� ����������"; break;
    case 3: return "����� ���������� ����������"; break;
    case 2: return "����� ��������� � ���������� ����������"; break;
    default: return "����������� ���";
    }
};
