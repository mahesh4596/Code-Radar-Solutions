int calculatePenalty(int subday,int submonth,int subyear,int dueday,int duemonth,int dueyear)
{
    int penalty = 0;
    if(dueyear != subyear)
        penalty = 5000;
    else if(duemonth != submonth && subyear == dueyear && subday == dueday)
        penalty = (submonth - duemonth) * 200;
    else if(subday != dueday && subyear == dueyear && submonth == duemonth)
        penalty = (subday - dueday) * 10;
    return penalty;
}