SELECT
  CASE
    WHEN Grade >= 8 THEN Name
    ELSE 'NULL'
  END AS Name,
  Grade,
  Value
FROM
  Students
JOIN
  Notes ON Value BETWEEN Min_Value AND Max_Value
WHERE
  Grade >= 8
  OR (Grade < 8 AND Value BETWEEN (SELECT MIN_Value FROM Notes WHERE Grade = 7) AND (SELECT Max_Value FROM Notes WHERE Grade = 7))
ORDER BY
  Grade DESC,
  CASE
    WHEN Grade >= 8 THEN Name
    ELSE NULL
  END ASC,
  Value ASC;
