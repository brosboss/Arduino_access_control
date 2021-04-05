String Current_Lab_ID(String lab_id){
  //----------------------------------------------------use esp8266 to get current lab_ID from site
  String Current_Lab_ID =""; 
   //check string length
  if(strlen(lab_id) == id_length){
    String post_url = "http:196.012.234/accesspoint?lab_id=lab";
  }  
  return Current_Lab_ID
}

String Read_RFID_Card(){
  //read rfid card when card is scanned
  String RFID_Card_ID ="";
  return RFID_Card_ID;
}

Boolean Does_Lab_ID_and_RFID_Card_match(String Current_Lab_ID, String Read_RFID_Card ){
  if(Current_Lab_ID == Read_RFID_Card){
    return true;
  }else{
    return false;
  }
}

void Open_Door(){
  //code to open door
  Send_Door_Opening_info_to_server();
}

String Send_Door_Opening_info_to_server(){
  //post information on when door was opened to the server
    //time / lab /RFID card Info
}


void setup() {
  // put your setup code here, to run once:

}

void loop() {
 
  // put your main code here, to run repeatedly:
  String Current_Lab_ID = Current_Lab_ID("lab1");
  String Read_RFID_Card = Read_RFID_Card();
  if( Does_Lab_ID_and_RFID_Card_match(Current_Lab_ID , Read_RFID_Card)){
    Open_Door();
  }
  
}
