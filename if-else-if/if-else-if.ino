 String weekDay = "Sunday";
 String message = "";
void setup()
{
    Serial.begin(115200);
}

void loop()
{
    if (weekDay == "Monday")
    {
        message = "เรียนวิชาภาษาอังกฤษ";
    }
    else if (weekDay == "Tuesday")
    {
        message = "เรียนวิชาไมโครคอนโทรลเลอร์";
      }
    else if (WeekDay == "Wednesday")
    {
        message = "เรียนวิชาโครงงาน";
      }
    else if (WeekDay == "Thursday")
    {
        message = "โทรศมนารคมเบื้องต้น";
      }
    else if (WeekDay == "Friday")
    {
       message = "อิเล็กทรอนิกส์อังฉริยะ";
      }
    else  (WeekDay == "Saturay")      
        message = "วันหยุดเสาร์-อาทิตย์";
    }
    Serial.println(message);
    delay(2000);
}
