#!/usr/bin/node
/* prints x times “C is fun” */
const first = process.argv[2];
const second = process.argv[3];

function add (a, b) {
	return a + b;
}

const a = parseInt(first);
const b = parseInt(second);

console.log(add(a, b));
