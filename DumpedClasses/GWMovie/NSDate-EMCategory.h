//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (EMCategory)
+ (id)em_dateWithMinutesBeforeNow:(long long)arg1;
+ (id)em_dateWithMinutesFromNow:(long long)arg1;
+ (id)em_dateWithHoursBeforeNow:(long long)arg1;
+ (id)em_dateWithHoursFromNow:(long long)arg1;
+ (id)em_dateYesterday;
+ (id)em_dateTomorrow;
+ (id)em_dateWithDaysBeforeNow:(long long)arg1;
+ (id)em_dateWithDaysFromNow:(long long)arg1;
+ (id)em_dateWithTimeIntervalInMilliSecondSince1970:(double)arg1;
@property(readonly) long long year;
@property(readonly) long long nthWeekday;
@property(readonly) long long weekday;
@property(readonly) long long week;
@property(readonly) long long month;
@property(readonly) long long day;
@property(readonly) long long seconds;
@property(readonly) long long minute;
@property(readonly) long long hour;
@property(readonly) long long nearestHour;
- (long long)em_distanceInDaysToDate:(id)arg1;
- (long long)em_daysBeforeDate:(id)arg1;
- (long long)em_daysAfterDate:(id)arg1;
- (long long)em_hoursBeforeDate:(id)arg1;
- (long long)em_hoursAfterDate:(id)arg1;
- (long long)em_minutesBeforeDate:(id)arg1;
- (long long)em_minutesAfterDate:(id)arg1;
- (id)em_componentsWithOffsetFromDate:(id)arg1;
- (id)em_dateAtStartOfDay;
- (id)em_dateBySubtractingMinutes:(long long)arg1;
- (id)em_dateByAddingMinutes:(long long)arg1;
- (id)em_dateBySubtractingHours:(long long)arg1;
- (id)em_dateByAddingHours:(long long)arg1;
- (id)em_dateBySubtractingDays:(long long)arg1;
- (id)em_dateByAddingDays:(long long)arg1;
- (_Bool)em_isTypicallyWorkday;
- (_Bool)em_isTypicallyWeekend;
- (_Bool)em_isInPast;
- (_Bool)em_isInFuture;
- (_Bool)em_isLaterThanDate:(id)arg1;
- (_Bool)em_isEarlierThanDate:(id)arg1;
- (_Bool)em_isLastYear;
- (_Bool)em_isNextYear;
- (_Bool)em_isThisYear;
- (_Bool)em_isSameYearAsDate:(id)arg1;
- (_Bool)em_isThisMonth;
- (_Bool)em_isSameMonthAsDate:(id)arg1;
- (_Bool)em_isLastWeek;
- (_Bool)em_isNextWeek;
- (_Bool)em_isThisWeek;
- (_Bool)em_isSameWeekAsDate:(id)arg1;
- (_Bool)em_isYesterday;
- (_Bool)em_isTomorrow;
- (_Bool)em_isToday;
- (_Bool)em_isEqualToDateIgnoringTime:(id)arg1;
- (double)em_timeIntervalSince1970InMilliSecond;
- (id)em_formattedDateDescription;
- (id)em_formattedTime;
- (id)em_minuteDescription;
- (id)em_timeIntervalDescription;
@end
