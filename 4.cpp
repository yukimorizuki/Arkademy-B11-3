 #include <iostream>
using namespace std;

int main() {
      int tanggal, telur, uang, harga, bonus, cek, i;
      harga = 2000;

      cout << "Warung Pak Haji Qodir \n";
      cout << "masukan tanggal beli: \n";
      cin >> tanggal;
      cout << "masukan Jumlah rupiah:\n";
      cin >> uang;

for ( i = 1; i <= tanggal; i++)
{
    if (tanggal %i==0)
    {
        cek++;
    }
    if (cek==2)
    {
        //prima
        if (tanggal %12==0)
        {
            bonus = +1;
        }
        
    }
    
    
}


      if (tanggal %2==0) 
      {
          //genap
          if (telur %12==0)
          {
              if (tanggal %5==0)
              {
                  bonus *10;
              }
          }
      }
      else 
      {
          //ganjil
          if (telur %20==0)
          {
              bonus = +3;
              if (tanggal %5==0)
              {
                  bonus *5;
              }
              
          }
      }

      telur = uang / harga + bonus;
      cout << "jumlah telur yang dibeli:";
      cout << telur;
}