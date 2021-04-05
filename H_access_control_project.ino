String Current_Lab_ID(String lab_id){
  //----------------------------------------------------function use esp8266 to get current lab_ID from site
  String Current_Lab_ID =""; 
    String post_url = "https://onlineexamnasiru.000webhostapp.com/?lab='lab1'";  //this link would return [12345] i need to be able to get this value returned as [Current_Lab_ID]
    return Current_Lab_ID
}

String Read_RFID_Card(){
  //-----------------------------------------------function read rfid card when card is scanned
  String RFID_Card_ID ="";
  return RFID_Card_ID;
}

void Open_Door(){  // -----------------------------------function to open door
  //code to open door 
}

void setup() {
  // put your setup code here, to run once:

}

void loop() { 
  // put your main code here, to run repeatedly:
  
  String Current_Lab_ID = Current_Lab_ID("lab1");
  String Read_RFID_Card = Read_RFID_Card();
  
  if( Current_Lab_ID == Read_RFID_Card){
    Open_Door();
  }
  
}
