cut -d: -f 1 /etc/passwd| sed '0~2n' | rev | sort -r |sed -n "${FT_LINE1}, ${FT_LINE2} p" | tr '\n' ' ' | tr ' ' ',' 
#adicionar espaços com o sed ou awk
