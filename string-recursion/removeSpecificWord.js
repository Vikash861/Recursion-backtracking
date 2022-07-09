let removeSpecificWrd =(str)=> {
    if(str === ""){
        return "";
    }

    if(str.startsWith("apple")){
        return removeSpecificWrd(str.substring(4)); 
    }
    else{
        return str[0] + removeSpecificWrd(str.substring(1));
    }
}  

console.log(removeSpecificWrd("dbcappleswjsbeef"));


// type-2
let removeApp =(str)=> {
    if(str === ""){
        return "";
    }

    if(str.startsWith("app") && !(str.startsWith("apple"))){
        return removeApp(str.substring(3)); 
    }
    else{
        return str[0] + removeApp(str.substring(1));
    }
}  

console.log(removeApp("somethingapp"));