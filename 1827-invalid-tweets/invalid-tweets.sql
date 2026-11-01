# Write your MySQL query statement below
SELECT tweet_id AS tweet_id
FROM Tweets
WHERE length(content) > 15;