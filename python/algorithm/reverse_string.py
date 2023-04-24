def reverse(string: str):
	reverse_str = ""
	for i in range(len(string)):
		reverse_str = reverse_str + string[-(i+1)]
	return reverse_str

if __name__ == "__main__":
	print(reverse("I LOVE MELLY"))
