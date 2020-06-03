let account = new Map(); /* element : { key : accountName, value : { maximum , balance, } } */
function solution(reqs) {
    var answer = [];
    for (let i = 0; i < reqs.length; i++) {
        /* Tokenize */
        let currentValue = reqs[i];
        let currentTokens = currentValue.split(' '); /* logic */
        answer.push(bankSystem(currentTokens));
    }
    return answer;
}

function bankSystem(currentTokens) {
    let status;
    switch (currentTokens[0]) {
        case 'CREATE':
            status = createAccount(currentTokens);
            break;
        case 'DEPOSIT':
            status = depositAccount(currentTokens);
            break;
        case 'WITHDRAW':
            status = withdrawAccount(currentTokens);
            break;
        default:
            break;
    }
    return status;
}

function createAccount(currentTokens) {
    const accountName = currentTokens[1];
    if (account.has(accountName)) {
        return 403;
    }
    account.set(accountName, {
        maximum: (parseInt(currentTokens[2]) * -1),
        balance: 0
    }) return 200;
}

function depositAccount(currentTokens) {
    const accountName = currentTokens[1];
    if (!account.has(accountName)) {
        return 404;
    }
    let currentAccount = account.get(accountName);
    account.set(accountName, {
        maximum: currentAccount.maximum,
        balance: currentAccount.balance + parseInt(currentTokens[2])
    }) return 200;
}

function withdrawAccount(currentTokens) {
    const accountName = currentTokens[1];
    if (!account.has(accountName)) {
        return 404;
    }
    let currentAccount = account.get(accountName);
    if (currentAccount.maximum > currentAccount.balance - parseInt(currentTokens[2])) return 403;
    account.set(accountName, {
        maximum: currentAccount.maximum,
        balance: currentAccount.balance - parseInt(currentTokens[2])
    }) return 200;
}