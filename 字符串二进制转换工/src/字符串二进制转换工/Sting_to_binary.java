package 字符串二进制转换工;

import java.util.Scanner;

public class Sting_to_binary {

	public static void main(String args[]) {
	
		
		char temp1[]=new char[1];
		char temp2[]=new char[1];
		//int  array1[]=new int[8];
		int array1[]= {0,0,0,0,0,0,0,0};
		//int  array2[]=new int[8];
		int array2[]= {0,0,0,0,0,0,0,0};
		  Scanner scan1 = new Scanner(System.in);
		  System.out.println("请输入要加密或解密的英文字符串");
		  String password=scan1.nextLine();
		  System.out.println("请输入您的密钥（长度大于明文长度)");
		  Scanner scan2 = new Scanner(System.in); 
		  String key = scan2.nextLine();
		  System.out.println("加密或解密结果:");
		  
		for(int i=0;i<password.length();i++) {
			
			 temp1[0]=password.charAt(i);
			 temp2[0]=key.charAt(i);
			 array1=BinstrToIntArray(StrToBinstr(temp1));
			 array2=BinstrToIntArray(StrToBinstr(temp2));
			 for(int j=0;j<StrToBinstr(temp1).length();j++) {
				 array1[j]=array1[j]^array2[j];
			 }
//			 for(int k=0;k<array1.length;k++) {
//				 System.out.print(array1[k]);
//			 }
			 
			  System.out.print(BinstrToChar(array1)); 
			 
			 
		}
		  
		  
		  
//		  for(int i=0;i<test.length();i++) {
//        temp[0]=test.charAt(i);		      
//        System.out.print(BinstrToChar(StrToBinstr(temp)));
//        
//        }
		
	
	}
	// 将字符串转换成二进制字符串，以空格相隔 
    public static String StrToBinstr(char[] strChar) { 
        //char[] strChar = str.toCharArray(); 
        String result = "";  
            result += Integer.toBinaryString(strChar[0]); 
        return result; 
    } 
	//将二进制字符串转换为char 
    public static char BinstrToChar(int temp[]) { 
        //int[] temp = BinstrToIntArray(binStr); 
        int sum = 0; 
        for (int i = 0; i < temp.length; i++) { 
            sum += temp[temp.length - 1 - i] << i; 
        } 
        return (char) sum; 
    } 
    
	// 将二进制字符串转换成int数组 
	  public static int[] BinstrToIntArray(String binStr) { 
	        char[] temp = binStr.toCharArray(); 
	        int[] result = new int[temp.length]; 
	        for (int i = 0; i < temp.length; i++) { 
	            result[i] = temp[i] - 48; 
	        } 
	        return result; 
	    } 
	  
}
