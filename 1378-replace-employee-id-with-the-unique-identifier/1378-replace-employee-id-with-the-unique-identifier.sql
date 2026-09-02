SELECT uni.unique_id, emp.name
FROM Employees emp 
LEFT JOIN  EmployeeUNI uni
ON uni.id = emp.id;