#include <iostream>
#include <string.h>
#include <algorithm>
#include <string>
using namespace std;

typedef struct covid
{
  string provinsi;
  string KabupatenKota;
  int total_penduduk;
  int PendudukVaksin;
  int total_lansia;
  int LansiaVaksin;
  int lvl_ppkm;
} cvd;

cvd list_cvd[10];

void print_list_cvd()
{
  int flag = 0;

  cout << "========================================================================================================================" << endl;
  cout << "================================================== Data Covid ==========================================================" << endl;
  cout << "|  Provinsi -- Kabupaten/Kota -- Total Penduduk -- Penduduk Tervaksin -- Total Lansia -- Lansia Tervaksin -- Level PPKM |" << endl;
  cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
  for (int i = 0; i < 10; i++)
  {
    cout << list_cvd[i].provinsi << "\t\t- " << list_cvd[i].KabupatenKota << "\t\t- " << list_cvd[i].total_penduduk << "\t\t- " << list_cvd[i].PendudukVaksin << "\t\t- " << list_cvd[i].total_lansia << "\t\t- " << list_cvd[i].LansiaVaksin << "\t\t- " << list_cvd[i].lvl_ppkm;
    cout << endl;
  }

  cout << "========================================================================================================================" << endl;
}

void lansia_cvd()
{
  float tempLansia;
  float tempPenduduk;
  int j;
  for (int i = 0; i < 10; i++)
  {
    cout << "Presentase Provinsi " << list_cvd[i].provinsi << " "
         << "Kota"
         << " " << list_cvd[i].KabupatenKota << endl;
    tempLansia = (float)list_cvd[i].LansiaVaksin / list_cvd[i].total_lansia * 100;
    cout << "Persentase Vaksin Lansia = " << tempLansia << " %";
    cout << endl;
    tempPenduduk = (float)list_cvd[i].PendudukVaksin / list_cvd[i].total_penduduk * 100;
    cout << "Persentase Vaksin Penduduk = " << tempPenduduk << " %";
    cout << endl;
    if (tempLansia >= 60 && tempPenduduk >= 70)
    {
      cout << "PPKM LVL 1";
      list_cvd[i].lvl_ppkm = 1;
      cout << endl;
      cout << endl;
    }
    else if ((tempLansia >= 40 && tempLansia < 60) && (tempPenduduk >= 50 && tempPenduduk < 70))
    {
      cout << "PPKM LVL 2";
      list_cvd[i].lvl_ppkm = 2;
      cout << endl;
      cout << endl;
    }
    else if (tempLansia < 40 && tempPenduduk < 50)
    {
      cout << "PPKM LVL 3";
      list_cvd[i].lvl_ppkm = 3;
      cout << endl;
      cout << endl;
    }
  }
}

void show_array(string arr[], int arraysize)
{
  for (int i = 0; i < arraysize; i++)
    cout << arr[i] << ", ";
}

void binarySearchProvinsi(string arr[], int size)
{
  string dicari;
  cout << "\nThe array is : \n";
  print_list_cvd();
  sort(arr, arr + size);
  cout << endl;
  cout << "Data Apa Yang Ingin Anda Cari = ";
  cin >> dicari;
  cout << "\n\nMencari Data Untuk " << dicari;
  if (binary_search(arr, arr + size, dicari))
  {
    cout << "\nData Ditemukan Di Array\n";
    for (int i = 0; i < 10; i++)
    {
      if (list_cvd[i].provinsi == dicari)
      {
        cout << "================================================== Data Ditemukam ======================================================" << endl;
        cout << "|  Provinsi -- Kabupaten/Kota -- Total Penduduk -- Penduduk Tervaksin -- Total Lansia -- Lansia Tervaksin -- Level PPKM |" << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << list_cvd[i].provinsi << "\t\t- " << list_cvd[i].KabupatenKota << "\t\t- " << list_cvd[i].total_penduduk << "\t\t- " << list_cvd[i].PendudukVaksin << "\t\t- " << list_cvd[i].total_lansia << "\t\t- " << list_cvd[i].LansiaVaksin << "\t\t- " << list_cvd[i].lvl_ppkm;
        cout << endl;
        cout << "========================================================================================================================" << endl;
      }
    }
  }
  else
  {
    cout << "\nString not Founded in array\n";
  }
}

void binarySearchKota(string arr[], int size)
{
  string dicari;
  cout << "\nThe array is : \n";
  print_list_cvd();
  sort(arr, arr + size);
  cout << endl;
  cout << "Data Apa Yang Ingin Anda Cari = ";
  cin >> dicari;
  cout << "\n\nMencari Data Untuk " << dicari;
  if (binary_search(arr, arr + size, dicari))
  {
    cout << "\nData Ditemukan Di Array\n";
    for (int i = 0; i < 10; i++)
    {
      if (list_cvd[i].KabupatenKota == dicari)
      {
        cout << "================================================== Data Ditemukam ======================================================" << endl;
        cout << "|  Provinsi -- Kabupaten/Kota -- Total Penduduk -- Penduduk Tervaksin -- Total Lansia -- Lansia Tervaksin -- Level PPKM |" << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << list_cvd[i].provinsi << "\t\t- " << list_cvd[i].KabupatenKota << "\t\t- " << list_cvd[i].total_penduduk << "\t\t- " << list_cvd[i].PendudukVaksin << "\t\t- " << list_cvd[i].total_lansia << "\t\t- " << list_cvd[i].LansiaVaksin << "\t\t- " << list_cvd[i].lvl_ppkm;
        cout << endl;
        cout << "========================================================================================================================" << endl;
      }
    }
  }
  else
  {
    cout << "\nString not Founded in array\n";
  }
}

void binarySearchPpkm(char arr[], int size)
{
  int dicari;
  cout << "\nThe array is : \n";
  print_list_cvd();
  sort(arr, arr + size);
  cout << endl;
  cout << "Cari level PPKM = ";
  cin >> dicari;
  cout << "\n\nMencari Data Untuk " << dicari;
  if (binary_search(arr, arr + size, dicari))
  {
    cout << "\nData Level PPKM Ditemukan : \n";
    for (int i = 0; i < 10; i++)
    {
      if (list_cvd[i].lvl_ppkm == dicari)
      {
        cout << "================================================== Data Ditemukam ======================================================" << endl;
        cout << "|  Provinsi -- Kabupaten/Kota -- Total Penduduk -- Penduduk Tervaksin -- Total Lansia -- Lansia Tervaksin -- Level PPKM |" << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << list_cvd[i].provinsi << "\t\t- " << list_cvd[i].KabupatenKota << "\t\t- " << list_cvd[i].total_penduduk << "\t\t- " << list_cvd[i].PendudukVaksin << "\t\t- " << list_cvd[i].total_lansia << "\t\t- " << list_cvd[i].LansiaVaksin << "\t\t- " << list_cvd[i].lvl_ppkm;
        cout << endl;
        cout << "========================================================================================================================" << endl;
      }
    }
  }
  else
  {
    cout << "\nString not Founded in array\n";
  }
}

void searchProvinsi()
{
  string arr[10];
  for (int i = 0; i < 10; i++)
  {
    arr[i] = list_cvd[i].provinsi;
    // arr[i] = '\0';
  }
  int size = sizeof(arr) / sizeof(arr[0]);
  binarySearchProvinsi(arr, size);
}

void searchKota()
{
  string arr[10];
  for (int i = 0; i < 10; i++)
  {
    arr[i] = list_cvd[i].KabupatenKota;
    // arr[i] = '\0';
  }
  int size = sizeof(arr) / sizeof(arr[0]);
  binarySearchKota(arr, size);
}

void searchPpkm()
{
  char arr[10];
  for (int i = 0; i < 10; i++)
  {
    arr[i] = list_cvd[i].lvl_ppkm;
    // arr[i] = '\0';
  }
  int size = sizeof(arr) / sizeof(arr[0]);
  binarySearchPpkm(arr, size);
}

int main()
{
  string provinsi_cvd[10] = {"DKI", "Jabar", "Banten", "Jateng", "Jatim", "DIY", "Bali", "NTB", "NTT", "Sulut"};
  string KabupatenKota_cvd[10] = {"Jakarta", "Bandung", "Serang", "Semarang", "Surabaya", "Yogyakarta", "Denpasar", "Mataram", "Kupang", "Manado"};
  int total_penduduk_cvd[10] = {1000, 1200, 1400, 1600, 1800, 2100, 2200, 2400, 3800, 4000};
  int pendudukVaksin_cvd[10] = {700, 700, 800, 1000, 1200, 1400, 1000, 1100, 2675, 2800};
  int total_lansia_cvd[10] = {400, 500, 600, 800, 1000, 1200, 1400, 1600, 1800, 2000};
  int LansiaVaksin_cvd[10] = {300, 250, 300, 350, 400, 700, 500, 550, 1125, 1200};
  int pilih;
  int option;
  int cari;
  int count = 0;
  int i, j, min_idx;
  int temp1;
  string flag;

  cout << "Gondol";
  cout << "Abdol bgsd";
  cout << "aku ganteng";

  for (int i = 0; i < 10; i++)
  {
    list_cvd[i].provinsi = provinsi_cvd[i];
    list_cvd[i].KabupatenKota = KabupatenKota_cvd[i];
    list_cvd[i].total_penduduk = total_penduduk_cvd[i];
    list_cvd[i].PendudukVaksin = pendudukVaksin_cvd[i];
    list_cvd[i].total_lansia = total_lansia_cvd[i];
    list_cvd[i].LansiaVaksin = LansiaVaksin_cvd[i];
  }

  print_list_cvd();
  lansia_cvd();

  do
  {

    cout << "1. Ascending " << endl;
    cout << "2. Descending  " << endl;
    cout << "3. Searching " << endl;
    cout << "Masukkan Pilihan Anda : " << endl;
    cin >> pilih;

    if (pilih == 1)
    {
      string flag = "belumUrut";
      cvd temp_data;
      while (flag == "belumUrut")
      {
        flag = "urut";
        for (int i = 1; i < 10; i++)
        {
          // insertiton sort ascending
          temp_data = list_cvd[i];
          j = i - 1;
          while (list_cvd[j].lvl_ppkm > temp_data.lvl_ppkm && j >= 0)
          {
            list_cvd[j + 1] = list_cvd[j];
            j--;
          }
          list_cvd[j + 1] = temp_data;
        }
      }
      print_list_cvd();
    }

    else if (pilih == 2)
    {
      string read = "tidakUrut";
      cvd temp_data;
      while (read == "tidakUrut")
      {
        read = "urut";
        for (int i = 1; i < 10; i++)
        {
          // insertiton sort ascending
          temp_data = list_cvd[i];
          j = i - 1;
          while (list_cvd[j].lvl_ppkm < temp_data.lvl_ppkm && j >= 0)
          {
            list_cvd[j + 1] = list_cvd[j];
            j--;
          }
          list_cvd[j + 1] = temp_data;
        }
      }
      print_list_cvd();
    }

    else if (pilih == 3)
    {
      int pilihan1;
      cout << "1. Provinsi " << endl;
      cout << "2. Kota " << endl;
      cout << "3. Level PPKM " << endl;
      cout << "Masuk Surga!!!!!!!!!";
      cout << "Masuk Neraka !!!!!!!";
      cout << "Masukkan Nomer Data Yang Ingin Anda Cari = ";
      cin >> pilihan1;

      if (pilihan1 == 1)
      {
        searchProvinsi();
      }
      if (pilihan1 == 2)
      {
        searchKota();
      }
      if (pilihan1 == 3)
      {
        searchPpkm();
      }
    }

  } while (pilih != 0);

  return 0;
}
