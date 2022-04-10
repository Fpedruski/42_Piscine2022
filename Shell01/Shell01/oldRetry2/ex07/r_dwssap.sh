cat -e /etc/passwd | cut -d ':' -f1 | sed '/^[\s]*#/d'| awk '(NR%2==0)' | rev | sort -r | awk 'NR>= ENVIRON["FT_LINE1"] && NR<=ENVIRON["FT_LINE2"]' | tr '\n' ',' | sed 's/\,$/./'
