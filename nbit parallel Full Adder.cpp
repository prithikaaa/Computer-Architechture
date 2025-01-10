#include <vector>
void fullAdder(int A, int B, int Cin, int &Sum, int &Carry) {
    Sum = A ^ B ^ Cin;
    Carry = (A & B) | (B & Cin) | (A & Cin);
}


void nBitParallelAdder(const vector<int> &A, const vector<int> &B, int &n, vector<int> &Sum, int &Carry) {
    int Cin = 0;
    for (int i = 0; i < n; ++i) {
        fullAdder(A[i], B[i], Cin, Sum[i], Cin);
    }
    Carry = Cin;
}

int main() {
    int n;
    cout << "Enter the number of bits for the adder: ";
    cin >> n;
    vector<int> A(n), B(n);
    cout << "Enter the first binary number (A): ";
    for (int i = n - 1; i >= 0; --i) {
        cin >> A[i];
    }

    cout << "Enter the second binary number (B): ";
    for (int i = n - 1; i >= 0; --i) {
        cin >> B[i];
    }
    vector<int> Sum(n);
    int Carry;
    nBitParallelAdder(A, B, n, Sum, Carry);
    cout << "Sum: ";
    for (int i = n - 1; i >= 0; --i) {
        cout << Sum[i];
    }
    cout << endl;

    cout << "Carry: " << Carry << endl;

    return 0;
}
