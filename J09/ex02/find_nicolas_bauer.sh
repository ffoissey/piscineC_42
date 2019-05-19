grep -i bauer contact_hard.txt | grep -i nicolas | grep -v nicolasbauer@ | grep -vi bomber | rev | tr "\t" " " | cut -d ' ' -f 2 | rev | grep ')'
