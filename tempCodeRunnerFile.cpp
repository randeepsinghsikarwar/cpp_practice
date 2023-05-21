 vector<int> result;
    stringstream ss(str);
    int i = 0, a = 0;
    char c;
    while(i<str.length()/2+1){
        ss>>a>>c;
        result.push_back(a);
        i++;
    }
    return result;
