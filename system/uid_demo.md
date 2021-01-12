# uid_demo

```{r, engine='bash', count_lines}
]0;user@computer: ~/media/program/c_program/Hacking-The-Art-of-Exploitation/file_access[01;32muser@computer[00m:[01;34m~/media/program/c_program/Hacking-The-Art-of-Exploitation/file_access[00m$ id readese[K[Kr
id: ‘reader’: no such user
]0;user@computer: ~/media/program/c_program/Hacking-The-Art-of-Exploitation/file_access[01;32muser@computer[00m:[01;34m~/media/program/c_program/Hacking-The-Art-of-Exploitation/file_access[00m$ id
uid=1000(user) gid=1000(user) groups=1000(user),4(adm),24(cdrom),27(sudo),30(dip),46(plugdev),116(lpadmin),126(sambashare)
]0;user@computer: ~/media/program/c_program/Hacking-The-Art-of-Exploitation/file_access[01;32muser@computer[00m:[01;34m~/media/program/c_program/Hacking-The-Art-of-Exploitation/file_access[00m$ id su[K[Kroot
uid=0(root) gid=0(root) groups=0(root)
]0;user@computer: ~/media/program/c_program/Hacking-The-Art-of-Exploitation/file_access[01;32muser@computer[00m:[01;34m~/media/program/c_program/Hacking-The-Art-of-Exploitation/file_access[00m$ id mozart
uid=1003(mozart) gid=1003(mozart) groups=1003(mozart)
]0;user@computer: ~/media/program/c_program/Hacking-The-Art-of-Exploitation/file_access[01;32muser@computer[00m:[01;34m~/media/program/c_program/Hacking-The-Art-of-Exploitation/file_access[00m$  [Kwich[K[K[Khich chsh
/usr/bin/chsh
]0;user@computer: ~/media/program/c_program/Hacking-The-Art-of-Exploitation/file_access[01;32muser@computer[00m:[01;34m~/media/program/c_program/Hacking-The-Art-of-Exploitation/file_access[00m$ ls -l usr/bin[K[K[K[K[K[K[K/usr/bin/chsh 
-rwsr-xr-x 1 root root 44528 Mär 22  2019 [0m[37;41m/usr/bin/chsh[0m
]0;user@computer: ~/media/program/c_program/Hacking-The-Art-of-Exploitation/file_access[01;32muser@computer[00m:[01;34m~/media/program/c_program/Hacking-The-Art-of-Exploitation/file_access[00m$ cd /etc/pam.d/[K[K[K[Kss[K[Km.d/[K[K[K[K[K[K[K[K[K[K[K[K[K[Kgcc 0[K0[K-o uid_demo uid_demo.c 
[01m[Kuid_demo.c:[m[K In function ‘[01m[Kmain[m[K’:
[01m[Kuid_demo.c:4:27:[m[K [01;35m[Kwarning: [m[Kimplicit declaration of function ‘[01m[Kgetuid[m[K’; did you mean ‘[01m[Kgetline[m[K’? [[01;35m[K-Wimplicit-function-declaration[m[K]
  printf("real uid: %d\n", [01;35m[Kgetuid[m[K());
                           [01;35m[K^~~~~~[m[K
                           [32m[Kgetline[m[K
]0;user@computer: ~/media/program/c_program/Hacking-The-Art-of-Exploitation/file_access[01;32muser@computer[00m:[01;34m~/media/program/c_program/Hacking-The-Art-of-Exploitation/file_access[00m$ cat uid_demo.z[Kc
#include <stdio.h>

int main(){
	printf("real uid: %d\n", getuid());
	printf("effective uid: %d\n",getuid());
}
]0;user@computer: ~/media/program/c_program/Hacking-The-Art-of-Exploitation/file_access[01;32muser@computer[00m:[01;34m~/media/program/c_program/Hacking-The-Art-of-Exploitation/file_access[00m$ vim g[Kuid_demo.
[?2004l[?1l>[?25h[?1049l[23;0;0t]0;user@computer: ~/media/program/c_program/Hacking-The-Art-of-Exploitation/file_access[01;32muser@computer[00m:[01;34m~/media/program/c_program/Hacking-The-Art-of-Exploitation/file_access[00m$ vim uid_demo.c [1Pcat uid_demo.cgcc -o uid_demo uid_demo.c 
[01m[Kuid_demo.c:[m[K In function ‘[01m[Kmain[m[K’:
[01m[Kuid_demo.c:4:27:[m[K [01;35m[Kwarning: [m[Kimplicit declaration of function ‘[01m[Kgetuid[m[K’; did you mean ‘[01m[Kgetline[m[K’? [[01;35m[K-Wimplicit-function-declaration[m[K]
  printf("real uid: %d\n", [01;35m[Kgetuid[m[K());
                           [01;35m[K^~~~~~[m[K
                           [32m[Kgetline[m[K
[01m[Kuid_demo.c:5:31:[m[K [01;35m[Kwarning: [m[Kimplicit declaration of function ‘[01m[Kgeteuid[m[K’; did you mean ‘[01m[Kgetdelim[m[K’? [[01;35m[K-Wimplicit-function-declaration[m[K]
  printf("effective uid: %d\n",[01;35m[Kgeteuid[m[K());
                               [01;35m[K^~~~~~~[m[K
                               [32m[Kgetdelim[m[K
]0;user@computer: ~/media/program/c_program/Hacking-The-Art-of-Exploitation/file_access[01;32muser@computer[00m:[01;34m~/media/program/c_program/Hacking-The-Art-of-Exploitation/file_access[00m$ ./ger[Kt[K[K[Kuid_demo 
real uid: 1000
effective uid: 1000
]0;user@computer: ~/media/program/c_program/Hacking-The-Art-of-Exploitation/file_access[01;32muser@computer[00m:[01;34m~/media/program/c_program/Hacking-The-Art-of-Exploitation/file_access[00m$ sudo chown root;[K:root ./uid_demo
[sudo] password for user: 
]0;user@computer: ~/media/program/c_program/Hacking-The-Art-of-Exploitation/file_access[01;32muser@computer[00m:[01;34m~/media/program/c_program/Hacking-The-Art-of-Exploitation/file_access[00m$ ./uid_demo 
real uid: 1000
effective uid: 1000
]0;user@computer: ~/media/program/c_program/Hacking-The-Art-of-Exploitation/file_access[01;32muser@computer[00m:[01;34m~/media/program/c_program/Hacking-The-Art-of-Exploitation/file_access[00m$ chmod u+s uid_demo
chmod: changing permissions of 'uid_demo': Operation not permitted
]0;user@computer: ~/media/program/c_program/Hacking-The-Art-of-Exploitation/file_access[01;32muser@computer[00m:[01;34m~/media/program/c_program/Hacking-The-Art-of-Exploitation/file_access[00m$ chmod u+s uid_demo[C.uid_demo/uid_demo[1@s[1@u[1@d[1@o[1@ 
]0;user@computer: ~/media/program/c_program/Hacking-The-Art-of-Exploitation/file_access[01;32muser@computer[00m:[01;34m~/media/program/c_program/Hacking-The-Art-of-Exploitation/file_access[00m$ ls -l a[Kuid_demo
-rwsrwxr-x 1 root root 8392 Nov  1 21:33 [0m[37;41muid_demo[0m
]0;user@computer: ~/media/program/c_program/Hacking-The-Art-of-Exploitation/file_access[01;32muser@computer[00m:[01;34m~/media/program/c_program/Hacking-The-Art-of-Exploitation/file_access[00m$ ./uid_demo 
real uid: 1000
effective uid: 0
```
