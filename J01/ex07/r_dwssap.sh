cat /etc/passwd | sed "/^#/d" | cut -d : -f 1 | sed -n "n;p" | rev | sort -r | sed -n "$FT_LINE1, $FT_LINE2 p" | sed 's/$/, /' | sed '$ s/..$/./' | tr -d "\n"
