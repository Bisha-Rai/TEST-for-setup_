class Mul {
    constructor(value) {
        // JavaScript doesn't have strict typing, so we'll detect number type
        if (Number.isInteger(value)) {
            this.i = value;
            this.f = 0;
        } else {
            this.f = value;
            this.i = 0;
        }
    }

    multiply(other) {
        const result = new Mul(0);
        // Handle all multiplication cases: int*int, int*float, float*int, float*float
        result.f = (this.i * other.i) + (this.i * other.f) + (this.f * other.i) + (this.f * other.f);
        return result;
    }

    display() {
        console.log(`Multiple = ${this.f}`);
    }
}

// Main execution
const readline = require('readline').createInterface({
    input: process.stdin,
    output: process.stdout
});

readline.question('Enter the integer and float value (space separated): \n', input => {
    const [intStr, floatStr] = input.split(' ');
    const integer = parseInt(intStr);
    const floats = parseFloat(floatStr);
    
    const m1 = new Mul(integer);
    const m2 = new Mul(floats);
    const m3 = m1.multiply(m2);
    m3.display();
    
    readline.close();
});