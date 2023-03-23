#include <iostream>
using namespace std;

int arr[20];
int n;

void input()
{
    while (true) {
        cout << "masukkan jumlah data pada Array: ";    // membuat inputan jumlah element array
        cin >> n;        //memanggil variable inputan n

        if (n <= 20)
        {  // membuat kondisi n tidak lebih dari 20 
            break;

        }
        else
        {
            cout << "\nArray yang anda masukkan maksimal 20 element. \n"; // Menampilkan
        }

    }

    cout << endl;
    cout << "====================" << endl;
    cout << "Masukkan element array" << endl;
    cout << "====================" << endl;

    for (int i = 0; i < n; i++) // menggunakan perulangan for untuk menyimpan data pada array
    {
        cout << "data ke-" << (i + 1) << ": ";
        cin >> arr[i];

    }
}
// procedure insertionsort
void insertionsort()
{
    int temp; // membuat variable data temporer atau penyimpanan sementara
    int j;    // membuat variable j sebagai penanda

    for (int i = 1; i < n; i++) // 1. Looping dengan i dimulai dari 1 hingga n-1
    {
        temp = arr[i]; // 2. simpan nilai arr[i] ke variable sementara temp

        j = i - 1;  // 3. setting nilai j sama dengan i-1;

        while (j >= 0 && arr[j > temp]) // 4. looping while dimana nilai j lebih besar sama dengan
        {
            // arr[j] lebih besar sama dengan temp
            arr[j + 1] = arr[j];         //a. simpan arr [j] ke dalam variable arr[j + 1]
            j -- ;                         //b. decrement nilai j by `1

        }
        arr[j + 1] = temp;              //5. simpan nilai temp ke dalam arr[j + 1]

        cout << endl;
        cout << "\npass " << i << ": "; // output ke layar

        for (int k = 0; k < n; k++)
        {            // looping nilai k dimulai dari 0 hingga n-1
            cout << arr[k] << " ";      // output ke layar

        }
    }
};

void display()
{
    cout << endl;                       // output baris kosong
    cout << "total element movement= " << n - 1 << endl;  // cout movement element
    cout << "\n==================" << endl;      // output ke layar
    cout << "element array yang telah tersusun" << endl; // output ke layar
    cout << "===================" << endl; // output ke layar

    for (int j = 0; j < n; j++)
    {                           // looping dengan j dimulai dari 0 hingga n-1
        cout << arr[j] << endl; // output ke layar


    }
    cout << endl;   // output baris kosong
}



int main()
{
    input();        // memanggil input
    insertionsort();    // memanggil insertionsort
    display();  // memanggil display
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
