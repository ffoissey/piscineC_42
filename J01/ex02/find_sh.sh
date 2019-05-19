find . -type f \( -name ".*.sh" -o -name "*.sh" \) | rev | sed s/hs.// | tr -d '.' | cut -d / -f 1 | rev
