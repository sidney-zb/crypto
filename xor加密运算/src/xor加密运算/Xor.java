package xor��������;
import java.io.BufferedWriter;
import java.io.DataOutputStream;
import java.io.File;
import java.io.FileOutputStream;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class Xor {

	public static void main(String[] args) {
	String pathname="result.txt";	
		;
    Scanner scan1 = new Scanner(System.in);
    System.out.println("������Ҫ���ܻ���ܵ�Ӣ���ַ���");
    String password=scan1.nextLine();
    System.out.println("������������Կ�����ȴ������ĳ�����Ϊ����)");
    Scanner scan2 = new Scanner(System.in); 
    String key = scan2.nextLine();
    char array1[]=password.toCharArray();
    char array2[]=key.toCharArray();
    for(int i=0;i<array1.length;i++) {
    	
    	if(i<array2.length)
    	array1[i]=(char)(array1[i]^array2[i]);
    	
    	else array1[i]=(char)(array1[i]^5);
    
    }

    String result=String.copyValueOf(array1);
    writeToFile(pathname,result);
    
    System.out.println("������ܻ���ܽ��");
    
    System.out.println(new String(array1));
	}
	
	public static void writeToFile(String pathname,String result ) {
        try {
            FileOutputStream fout=new FileOutputStream(pathname);
            DataOutputStream dout=new DataOutputStream(fout);
          
            String line = "";
            
            line="���ܻ���ܽ��:"+result;
            
            try {
                File writeName = new File(pathname); 
                writeName.createNewFile();
                try (FileWriter writer = new FileWriter(writeName);
                     BufferedWriter out = new BufferedWriter(writer)
                ) {
                    out.write(line);
                    out.flush(); 
                }
            } catch (IOException e) {
                e.printStackTrace();
            }
            fout.close();
            dout.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    
   }   

}
