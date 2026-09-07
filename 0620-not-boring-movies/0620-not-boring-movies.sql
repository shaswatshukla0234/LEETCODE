/* Write your PL/SQL query statement below */
SELECT id,movie,description,rating from Cinema where description != 'boring' and MOD(id,2) != 0 ORDER BY RATING DESC;