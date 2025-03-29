int calculatePenalty(int subday,int submonth,int subyear,int dueday,int duemonth,int dueyear)
{
    int penalty = 0;
    if(dueyear != subyear && subday == dueday && submonth == duemonth)
        penalty = 5000;
    else if(duemonth != submonth && subday == dueday && subyear == dueyear)
        penalty = (submonth - duemonth) * 200;
    else if(dueday > subday && dueday != subday )
        penalty = (dueday - subday) * 10;
    else if(dueday != subday && duemonth != submonth && dueyear != subyear)
        return 0;
    else
        penalty = (subday - dueday) * 10;
    return penalty;
}