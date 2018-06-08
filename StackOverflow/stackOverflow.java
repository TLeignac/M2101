public class StackOverflow {

	public int fonct(int nbr) {
		int res;
		if (nbr <= 0) {
			res = 0;
		}
		else {
			if (nbr >= 1) {
				res = 1 + fonct(nbr-1);
			}
		}
		return res;
	}

	public void  main(String[] args) {
		int res;
		res = fonct(5);
		println(res);
	}	
}
