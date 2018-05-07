/*Square Wave (50% duty cycle) high and low timings
mS      Hz
1	500
2	250
3	166.6666667
4	125
5	100
6	83.33333333
7	71.42857143
8	62.5
9	55.55555556
10	50
11	45.45454545
12	41.66666667
13	38.46153846
14	35.71428571
15	33.33333333
16	31.25
17	29.41176471
18	27.77777778
19	26.31578947
20	25
21	23.80952381
22	22.72727273
23	21.73913043
24	20.83333333
25	20
26	19.23076923
27	18.51851852
28	17.85714286
29	17.24137931
30	16.66666667
31	16.12903226
32	15.625
33	15.15151515
34	14.70588235
35	14.28571429
36	13.88888889
37	13.51351351
38	13.15789474
39	12.82051282
40	12.5 */

void frecventa(byte targetPin, int highRate, int lowRate, int n) 
/* targetPin=nr of pin used
   highRate=High state duration
   lowRate=Low state duration
   n=number of repeats*/
{
   
    for (int i=0; i < n; i++)
    {
    digitalWrite(targetPin, HIGH);   
    delay(highRate);                     
    digitalWrite(targetPin, LOW);    
    delay(lowRate);
  }
}

void setup() {
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
}

void loop() {
frecventa(9,16,16,70);
delay(1000);
frecventa(10,12,12,70);
delay(1000); 
}




