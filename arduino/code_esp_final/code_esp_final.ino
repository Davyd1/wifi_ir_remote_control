void setup() {
  // put your setup code here, to run once:

local bson={
    [power]="CA31DA45", 
    [source]="17112D07", 
    [plus]="CF2F9DAB", 
    [moins]="B2BBAC69", 
    [mute]="123CD34B", 
    [play]="28DE45AA",
    [avance]="1E3D4782", 
    [recule]="B53DCEA6", 
    [bluetooth]="D65A38A",
    [repeat]="3CEB5F42",
    [Soundeffect]="F9F925C3",
    [sound]="C0CDDA6",
    [soundcontrol]="BF1BC226",
    [gauche]="879B92C2",
    [droite]="46868606"
} ;

local video={
  [power]="61D6F807",
  [mute]="61D66A95",
  [source]="61D6A05F",
  [zoom]="61D61AE5",
  [seize_neuf]="61D65AA5",
  [haut]="61D640BF",
  [bas]="61D6609F",
  [gauche]="61D620DF",
  [droite]="61D6E01F",
  [enter]="61D6807F",
  [play]="61D652AD",
  [stop]="61D6D22D"
};
}

void parser() {
-- URL/DEVICE/ORDRE
-- DEVICE =
-- ORDRE =
  
}

void loop() {
  // put your main code here, to run repeatedly:

if $DEVICE == "bson" then
  ORDRE bson.$ORDRE
 else if $DEVICE == "video" then
  ORDRE $DEVICE.ordre



}
