ldapsearch -Q -L "(uid=z*)" cn | grep '^cn:' | sort -r --ignore-case | cut -c5-999
