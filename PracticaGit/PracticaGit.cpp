#include <iostream>
using namespace std;

class BudgetMatrix {
private:
    int rows;
    int cols;
    double** data;
    string* budgetCategory;

public:
    BudgetMatrix(int filas, int columnas) {
        data = new double* [rows];
        for (int i = 0; i < rows; i++) {
            data[i] = new double[cols];
            for (int j = 0; j < cols; j++) {
                data[i][j] = 0;
            }
        }
        budgetCategory = new string[rows];
    }

    ~BudgetMatrix() {
        for (int i = 0; i < rows; i++) {
            delete[] data[i];
        }
        delete[] data;
        delete[] budgetCategory;
    }
    void setbudgetCategory(string names[]) {
        for (int i = 0; i < rows; i++) {
            budgetCategory[i] = names[i];
        }
    }

    void setBudget(double budget[]) {
        for (int i = 0; i < rows; i++) {
            data[i][0] = budget[i];
        }
    }

    void calculatePending(int quarter);
    double totalPaid(int quarter) const;
    double pendingPercentage(int quarter) const;
    void display() const;
};





