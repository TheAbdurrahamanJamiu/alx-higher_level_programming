#!/usr/bin/node
fuction add (a, b) {
	const c = a + b;
	console.log(c);
}
add(Number(process.argv[2]), Number(process.argv[3]));
