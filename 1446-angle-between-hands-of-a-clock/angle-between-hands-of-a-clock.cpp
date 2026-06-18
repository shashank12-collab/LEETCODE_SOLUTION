class Solution {
public:
    double angleClock(int hour, int minutes) {
        if(hour == 12)
        {
            hour = 0;
        }
        double hourhand = (30*hour) + (0.5*minutes);
        double minuteshand = 6*minutes;
        double angle = abs(hourhand - minuteshand);
        double second_angle = 360-angle;
        double ans = min(angle , second_angle);
        return ans;
    }
};