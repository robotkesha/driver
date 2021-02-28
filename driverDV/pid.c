/*
 * pid.c
 *
 * Created: 22.02.2021 11:42:30
 *  Author: akatsnelson
 */ 
// таймер TC4A инит в моторах
/*
#define maxOut 200
#define minOut 0

int KI[4] = {1,2,3,4};

int KP[4] = {1,2,3,4};

int KD[4] = {1,2,3,4};
	
void initPID(){
	
}

const int constrain(const int x, const int a, const int b) {
	if(x < a) {
		return a;
	}
	else if(b < x) {
		return b;
	}
	else
	return x;
}

int computePID(float input, float setpoint, float kp, float ki, float kd, float dt) {
	float err = setpoint - input;
	static float integral = 0, prevErr = 0;
	integral = constrain(integral + (float)err * dt * ki, minOut, maxOut);
	float D = (err - prevErr) / dt;
	prevErr = err;
	return constrain(err * kp + integral + D * kd, minOut, maxOut);
}

void pid(int n, int in, int point, int dt){
	if (dt == 0){
		dt = 0.25;
	}
	int kp = KP[n];
	int ki = KI[n];
	int kd = KD[n];
	switch (n){
	case 1:
		setMotor1(computePID(in, point, kp, ki, kd, dt));
		break;
	case 2:
		setMotor2(computePID(in, point, kp, ki, kd, dt));
		break;
	case 3: 
		setMotor3(computePID(in, point, kp, ki, kd, dt));
		break;
	case 4: 
		setMotor4(computePID(in, point, kp, ki, kd, dt));
		break;	
	}
	
}

static timerr = 0;
static RPMCounter = 0;
int pVal = false;
ISR(TIMER4_COMPA_vect){
	timerr++;
	if(timerr != 2000){
	}
}

*/