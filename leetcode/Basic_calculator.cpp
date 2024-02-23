class Solution {
public:
    int calculatorFn(string &st,int &i){
        int ans = 0, interim = 0;
        long long num = 0;
        char op = '+';
        while(i < st.size()){
            if(isdigit(st[i])){

                num = 0;
                while(i < st.size() && isdigit(st[i])){
                    num = num * 10 + st[i] - '0';
                    i++;
                }

                if(op == '+' || op == '-'){
                    ans += interim;
                    if(op == '-') interim = -1 * num;
                    else interim = num;
                }
                else if(op == '*'){
                    interim *= num;
                }
                else if(op == '/'){
                    interim /= num;
                }
            }

            else if(st[i] == '('){
                i++;
                num = calculatorFn(st,i);

                if(op == '+' || op == '-'){
                    ans += interim;
                    if(op == '-') interim = -1 * num;
                    else interim = num;
                }
                else if(op == '*'){
                    interim *= num;
                }
                else if(op == '/'){
                    interim /= num;
                }
            }

            else if(st[i] == ')'){
                i++;
                break;
            }

            else{
                if(st[i] != ' ') op = st[i];
                i++;
            }
        }
        ans += interim;
        return ans;
    }

    int calculate(string s) {
        int i = 0;
        return calculatorFn(s,i);
    }
};