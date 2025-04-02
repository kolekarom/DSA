const abc = {
    name: 'abc',
}
const pqr = {
    name: 'pqr',
}
const xyz = {
    name: 'xyz',
}
abc[pqr] = {
    name: 'om'
}
pqr[xyz] = {
    name: 'sush'
}
console.log(abc[pqr].name) // undefined