
// JAWABAN 

// 1. Karena algoritma adalah urutan langkah-langkah terstruktur yang dirancang untuk memecahkan masalah secara sistematis dan efisien.

// 2. Dua sturktur tersebut adalah : Array dan Lingked list

// 3. 1. ukuran input, algoritma, struktur data, pegguna sumber daya, bahasa pemograman, lingkungan eksekusi

// 4. Algoritma Merge Sort memecah data menjadi dua bagian secara rekursif, kemudian mengurutkan kedua bagian tersebut, dan akhirnya menggabungkan kedua bagian yang telah diurutkan menjadi satu kesatuan data yang terurut. Algoritma ini memiliki kompleksitas waktu O(n log n), yang membuatnya efisien untuk mengurutkan data yang ukurannya besar.

// 5. Algoritma-algoritma Quadratic: 1. Bubble Sort, 2. Slection Sort, 3. Insertion Sort
    //Algoritma-algoritma Loglinear: 1. Quick Sort, 2. Marge Sort

// 6. Program Dari Algortima Marge Sort

#include <iostream>
using namespace std;


void merge(string nama, int arr[20], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    // Create temporary arrays
    int L[n1], R[n2];

    // Copy data to temporary arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Merge the temporary arrays back into arr[l..r]
    i = 0; // Initial index of first sub-array
    j = 0; // Initial index of second sub-array
    k = l; // Initial index of merged sub-array
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

