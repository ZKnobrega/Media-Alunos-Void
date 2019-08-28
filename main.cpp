#include <iostream>
#include <string>

using namespace std;

void imprimir_vetor(double arr[], string nomes[], int N){

    for(int i = 0; i<N ; ++i){
        cout << i+1 << "º Lugar: " << nomes[i] << " - " << arr[i] << ", " << endl;
    }

}

void ordenar_vetor(double arr[], string nomes[], int n){

	for (int i = 0; i < n; ++i)
	{
		for (int j = i+1; j < n; ++j)
		{
			if (arr[j] > arr[i])
			{
				int aux = arr[i];
				arr[i] = arr[j];
				arr[j] = aux;

				string temp = nomes[i];
				nomes[i] = nomes[j];
				nomes[j] = temp;
			}

		}
	}

	imprimir_vetor(arr, nomes, n);

}
int main()

{
    setlocale(LC_ALL, "portuguese");
    cout << "Coloque o Número de Alunos";
    int n;
    cin >> n;
    double medias[n];
    string nomes[n];

        for(int i=0; i<n; ++i){
        double nota1, nota2, media;
        string nomealuno;
        cout << "Insira O Nome Do " << i+1 <<"º Aluno:" << endl;
        cin >> nomealuno;
        cout << "Digite a nota de " << nomealuno << "\n" <<endl;
        cout << ("Coloque a Primeira Nota. \n");
        cin >> nota1;
        cout << ("Coloque a Segunda Nota. \n");
        cin >> nota2;
        media = (nota1+nota2)/2;
        cout << "A Média das Notas é:\n" << media << endl;
        cout << ("\n \n");
        medias[i]=media;
        nomes[i] = nomealuno;

    }

    ordenar_vetor(medias, nomes, n);
}
