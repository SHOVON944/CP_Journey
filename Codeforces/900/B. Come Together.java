/*
███████╗██╗  ██╗ ██████╗ ██╗   ██╗ ██████╗ ███╗   ██╗
██╔════╝██║  ██║██╔═══██╗██║   ██║██╔═══██╗████╗  ██║
███████╗███████║██║   ██║██║   ██║██║   ██║██╔██╗ ██║
╚════██║██╔══██║██║   ██║╚██╗ ██╔╝██║   ██║██║╚██╗██║
███████║██║  ██║╚██████╔╝ ╚████╔╝ ╚██████╔╝██║ ╚████║
╚══════╝╚═╝  ╚═╝ ╚═════╝   ╚═══╝   ╚═════╝ ╚═╝  ╚═══╝
*/

import java.util.Scanner;

public class B. Come Together {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        while(t-->0){
            int xA = scan.nextInt();
            int yA = scan.nextInt();
            int xB = scan.nextInt();
            int yB = scan.nextInt();
            int xC = scan.nextInt();
            int yC = scan.nextInt();

            int shortest_way = 1;
            if( (xB>xA  &&  xC>xA)  ||  (xB<xA  &&  xC<xA) ) shortest_way += Math.min(Math.abs(xB-xA), Math.abs(xC-xA));
            if( (yB>yA  &&  yC>yA)  ||  (yB<yA  &&  yC<yA) ) shortest_way += Math.min(Math.abs(yB-yA), Math.abs(yC-yA));
            System.out.println(shortest_way);
        }
        scan.close();
    }
}