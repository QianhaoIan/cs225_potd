
vector<string> NoProblem(int start, vector<int> created, vector<int> needed) {

    // your code here
    int now = start;
    // int need = 0;
    vector<string> out;

    for (unsigned int i = 0; i < created.size(); ++i){
      if (now >= needed[i]){
        out.push_back("No problem! :D");
        now -= needed[i];
      }
      else{
        out.push_back("No problem. :(");
      }
      now += created[i];
    }

    return out;
}
