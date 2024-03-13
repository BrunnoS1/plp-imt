#include <iostream> 

using namespace std;

void moda(int v[], int n);
void media(int v[], int n);
void mediana(int v[], int n);

int v1[13] = { 1,6,8,9,9,5,9,7,9,9,5,6,4 };
int v2[11] = { 5,5,8,6,5,8,5,7,8,4,8 };
int v3[10] = { 1,8,4,5,9,7,6,3,2,0 };

int main()
{   
    cout << "\nMedia v1" << endl;
    media(v1, 13); 
    cout << "\nMedia v2" << endl;
    media(v2, 11);
    cout << "\nMedia v3" << endl;
    media(v3, 10);

    cout << "\nMediana v1" << endl;
    mediana(v1, 13);
    cout << "\nMediana v2" << endl;
    mediana(v2, 11);
    cout << "\nMediana v3" << endl;
    mediana(v3, 10);

    cout << "\nModa do vetor 1" << endl;
    moda(v1, 13);
    cout << "\nModa do vetor 2" << endl;
    moda(v2, 11);
    cout << "\nModa do vetor 3" << endl;
    moda(v3, 10);
    
    return 0;

}

//função para o cálculo da moda 
void moda(int v[], int n) {
    // Ordenando o vetor em ordem crescente
    for (int i = 1; i <= n - 1; i++) {
        for (int j = n - 1; j >= 0; j--) {
            if (v[j - 1] > v[j]) {
                float aux = v[j - 1];
                v[j - 1] = v[j];
                v[j] = aux;
            }
        }
    }

    // Contando o número de classes de elementos
    int cont = 0;
    for (int i = 0; i <= n - 2; i++) {
        if (v[i] != v[i + 1]) {
            cont++;
        }
    }
    cont++; // Somando 1 ao número de classes

    int* vc = new int[cont];
    int* hist = new int[cont];

    // Preenchendo o vetor de contagem com os elementos distintos
    if (n == cont) {
        cout << "Vetor amodal" << endl;
    }
    else {
        int j = 0;
        for (int i = 0; i <= n - 2; i++) {
            if (v[i] != v[i + 1]) {
                vc[j] = v[i];
                j++;
            }
        }
        vc[j] = v[n - 1];

        // Contando os elementos de cada classe
        for (int j = 0; j <= cont - 1; j++) {
            int k = 0;
            for (int i = 0; i <= n - 1; i++) {
                if (vc[j] == v[i]) {
                    k++;
                }
            }
            hist[j] = k;
        }

        // Encontrando a posição do elemento com maior frequência
        int pm, max = hist[0];
        for (int j = 0; j <= cont - 1; j++) {
            if (max < hist[j]) {
                max = hist[j];
            }
        }

        // Imprimindo a moda (elementos com maior frequência)
        cout << "Moda: \n";
        for (int j = 0; j <= cont - 1; j++) {
            if (hist[j] == max) {
                cout << vc[j] << endl;
            }
        }
    }

    delete[] vc;
    delete[] hist;
}

// função para calculo da media
void media(int v[], int n)
{
    float soma = 0.0;
    for (int i = 0; i < n; i++)
    {
        //cout << "v[" << i << "] = " << v[i] << endl;
        soma += v[i];
    }
    float media = (float) soma / n;
    cout << "Media: " << media << endl;
}

void mediana(int v[], int n)
{
    float mediana = 0.0;
    
    // ordenar
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (v[j] > v[j + 1])
            {
                int aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
    
    // checar se impar ou par
    int meio = n / 2;
    if (n % 2 == 0)
    {
        mediana = ((float) v[meio-1] + v[meio]) / 2;
    }
    else
    {
        mediana = v[meio];
    }
    cout << "Mediana: " << mediana << endl;
}