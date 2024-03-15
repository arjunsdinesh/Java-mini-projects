import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
class filehandling{
public static void main(String args[]){
try{
FileReader fr=new FileReader("file1.txt");
FileWriter fw=new FileWriter("file2.txt");
String str=" ";
int i;
while((i=fr.read())!=-1){
str +=(char)i;
}
System.out.println(str);
fw.write(str);
fr.close();
fw.close();
System.out.println("File reading and writing both are done");
}
catch(IOException e)
{
System.out.println("there are some IOException");
}
}
}