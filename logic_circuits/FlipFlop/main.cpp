#include <iostream>
#include <cstdlib>

using namespace std;

struct GateState{
    bool A = 0;
    bool B = 0;
    bool Out;
};

struct FlipFlopState{
    bool S  = 1;
    bool R  = 1;
    bool Q  = 1;
    bool NQ = 0;
};

void nandGate(GateState& gateState){
    gateState.Out = !(gateState.A && gateState.B);
    //cout <<"[DEBUG] " << gateState.Out  << endl;
}

void flipFlopSR(FlipFlopState& flipFlopState){
    
    GateState gateStateS;
    GateState gateStateR;

    gateStateS.A = flipFlopState.S;
    gateStateR.B = flipFlopState.R;


    gateStateR.Out = flipFlopState.NQ;
    

    gateStateS.B = gateStateR.Out;
    nandGate(gateStateS);
    flipFlopState.Q = gateStateS.Out;

    gateStateR.A = gateStateS.Out;
    nandGate(gateStateR);
    flipFlopState.NQ = gateStateR.Out;

    gateStateS.B = gateStateR.Out;
    nandGate(gateStateS);
    flipFlopState.Q = gateStateS.Out;


}


int main(){
    
    //GateState gateState;
    //nandGate(gateState);

    //cout << gateState.Out << endl;

    FlipFlopState flipFlop;
    flipFlopSR(flipFlop);
    cout << "S: " << flipFlop.S << " |R: " << flipFlop.R << " |Q: " << flipFlop.Q << " |~Q: " << flipFlop.NQ << endl;
    
    flipFlop.S = 0;
    flipFlopSR(flipFlop);
    cout << "S: " << flipFlop.S << " |R: " << flipFlop.R << " |Q: " << flipFlop.Q << " |~Q: " << flipFlop.NQ << endl;

    flipFlop.S = 1;
    flipFlopSR(flipFlop);
    cout << "S: " << flipFlop.S << " |R: " << flipFlop.R << " |Q: " << flipFlop.Q << " |~Q: " << flipFlop.NQ << endl;

    flipFlop.R = 0;
    flipFlopSR(flipFlop);
    cout << "S: " << flipFlop.S << " |R: " << flipFlop.R << " |Q: " << flipFlop.Q << " |~Q: " << flipFlop.NQ << endl;

    flipFlop.R = 1;
    flipFlopSR(flipFlop);
    cout << "S: " << flipFlop.S << " |R: " << flipFlop.R << " |Q: " << flipFlop.Q << " |~Q: " << flipFlop.NQ << endl;

    flipFlop.S = 0;
    flipFlopSR(flipFlop);
    cout << "S: " << flipFlop.S << " |R: " << flipFlop.R << " |Q: " << flipFlop.Q << " |~Q: " << flipFlop.NQ << endl;

    cout << endl;

    flipFlop.S = 1;
    flipFlop.R = 0;
    flipFlopSR(flipFlop);
    cout << "S: " << flipFlop.S << " |R: " << flipFlop.R << " |Q: " << flipFlop.Q << " |~Q: " << flipFlop.NQ << endl;

    flipFlop.S = 0;
    flipFlop.R = 1;
    flipFlopSR(flipFlop);
    cout << "S: " << flipFlop.S << " |R: " << flipFlop.R << " |Q: " << flipFlop.Q << " |~Q: " << flipFlop.NQ << endl;

    flipFlop.S = 1;
    flipFlop.R = 0;
    flipFlopSR(flipFlop);
    cout << "S: " << flipFlop.S << " |R: " << flipFlop.R << " |Q: " << flipFlop.Q << " |~Q: " << flipFlop.NQ << endl;

    flipFlop.S = 0;
    flipFlop.R = 0;
    flipFlopSR(flipFlop);
    cout << "S: " << flipFlop.S << " |R: " << flipFlop.R << " |Q: " << flipFlop.Q << " |~Q: " << flipFlop.NQ << endl;




    return 0;
}
