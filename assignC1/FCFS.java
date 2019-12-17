import java.util.*;

class FCFS {
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the number of Processes: ");
		int n = sc.nextInt();
		Process []process = new Process[n];

		/*//System.out.println(n);
		int processes[];
		int burst_time[];
		int arrival_time[];
		processes = new int [n];
		burst_time = new int [n];
		arrival_time = new int [n];*/

		for(int i=0;i<n;i++){
			System.out.print("Arrival time of P"+(i+1)+" :");
			int arrival_time = sc.nextInt();
			System.out.print("Burst time of P"+(i+1)+" :");
			int burst_time = sc.nextInt();
			process[i] = new Process("P"+(i+1),burst_time,arrival_time);
		}
		

		/*for(int i=0;i<n;i++){
			System.out.println(arrival_time[i]);
			System.out.println(burst_time[i]);
		}*/

	}
}