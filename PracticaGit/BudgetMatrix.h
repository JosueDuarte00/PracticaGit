#pragma once
class BudgetMatrix {
private:
    int rows;    // trimestres
    int cols;    // 2 columnas: presupuesto y pago
    double** data;

public:
    BudgetMatrix(int rows, int cols); {


    }

    ~BudgetMatrix();

    void setBudget(const double* budgets);

    void calculatePending(int quarter);

    double totalPaid(int quarter) const;

    double pendingPercentage(int quarter) const;

    void display() const;
};


