 class leet14 {
    public static void main(String[] args) {
        String strs[]={"flower","float","flat"};
        int k = 0;
        String s4 ="" ;

        if (strs.length == 0) {
            System.out.println("");
           
        }

        s4 = strs[0];
        while (k < strs.length) {
            char[] ch = s4.toCharArray();
            if (k + 1 < strs.length) {
                char[] ch1 = strs[k + 1].toCharArray();
                StringBuilder s3 = new StringBuilder();
                for (int j = 0, i = 0; i < ch.length && j < ch1.length; j++, i++) {
                    if (ch1[j] != ch[i])
                        break;
                    s3.append(ch[i]);
                }
                s4 = s3.toString();
            }
            k++;
        }
        System.out.println(s4);
    }
}