string timeConversion(string str) {
  // Get hours
  int h1 = (int)str[1] - '0';
  int h2 = (int)str[0] - '0';
  int hh = (h2 * 10 + h1 % 10);
  string time;

  // If time is in "AM"
  if (str[8] == 'A') {
    if (hh == 12) {
      time = "00";
      for (int i = 2; i <= 7; i++)
        time += str[i];
    } else {
      for (int i = 0; i <= 7; i++)
        time += str[i];
    }
  }

  // If time is in "PM"
  else {
    if (hh == 12) {
      time = "12";
      for (int i = 2; i <= 7; i++)
        time += str[i];
    } else {
      hh = hh + 12;
      time = to_string(hh);
      for (int i = 2; i <= 7; i++)
        time += str[i];
    }
  }
  return time;
}
