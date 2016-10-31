public int obtainSmallest(int num){

		String strNum = String.valueOf(num);
		PriorityQueue<Integer> queue = new PriorityQueue<>();
			
		for(int i=0; i<strNum.length()-1; i++){
			String newString = i == 0 ? "" : strNum.substring(0,i);
			if(strNum.charAt(i) > strNum.charAt(i+1)){
				newString += strNum.charAt(i) + strNum.substring(i+2, strNum.length());
			}else{
				newString += strNum.charAt(i+1) + strNum.substring(i+2, strNum.length());
			}
			queue.add(Integer.valueOf(newString));
		}
		
		return queue.poll();
		
	}
