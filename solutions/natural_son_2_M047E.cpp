/*
==================================================
Problem: [Natural son 2]
Platform: RoboContest
Author: [tabrapid]
Date: [06/01/2026]
==================================================
*/

#include <bits/stdc++.h> // Competitive programming shortcut

// Optional macros
#define FAST_IO                       \
    std::ios::sync_with_stdio(false); \
    std::cin.tie(nullptr);
#define ALL(v) (v).begin(), (v).end()

// Optional typedefs
typedef long long ll;
typedef std::vector<int> vi;
typedef std::pair<int, int> pii;

std::string say(int num);

int main()
{
    FAST_IO;

    int num;
    std::cin >> num;

    std::cout << say(num) << std::endl;

    return 0;
}

std::string say(int num)
{
  std::map<int, std::string> birlar = 
  {
    { 0, ""},
    { 1, "bir"},
    { 2, "ikki"},
    { 3, "uch"},
    { 4, "to'rt"},
    { 5, "besh"},
    { 6, "olti"},
    { 7, "yetti"},
    { 8, "sakkiz"},
    { 9, "to'qqiz"}
  };

  std::map<int, std::string> onlar = {
      { 0, ""},
      { 1, "o'n"},
      { 2, "yigirma"},
      { 3, "o'ttiz"},
      { 4, "qirq"},
      { 5, "ellik"},
      { 6, "oltmish"},
      { 7, "yetmish"},
      { 8, "sakson"},
      { 9, "to'qson"}
  };

  std::map<int, std::string> yuzlar = {
      { 0, ""},
      { 1, "bir yuz"},
      { 2, "ikki yuz"},
      { 3, "uch yuz"},
      { 4, "to'rt yuz"},
      { 5, "besh yuz"},
      { 6, "olti yuz"},
      { 7, "yetti yuz"},
      { 8, "sakkiz yuz"},
      { 9, "to'qqiz yuz"}
  };

  std::string res = "";

  int oxiridagi_raqami = num / 100;
  int ortadagi_raqami = (num % 100) / 10;
  int boshidagi_raqami = num % 10;

  if(num == 1000)
  {
    return "bir ming";
  }
  else 
  {
    if(num >= 100)
    {
      if(ortadagi_raqami == 0)
      {
        res += yuzlar[oxiridagi_raqami] + " " + birlar[boshidagi_raqami];
      }
      else {
        {
          res += yuzlar[oxiridagi_raqami] + " " +  onlar[ortadagi_raqami] + " " + birlar[boshidagi_raqami];
        }
      }
    }
    else if( num < 100 && num >= 10)
    {
      res +=  onlar[ortadagi_raqami] + " " + birlar[boshidagi_raqami];
    }
    else {
      {
        res += birlar[boshidagi_raqami];
      }
    }
    return res;
  }
}
