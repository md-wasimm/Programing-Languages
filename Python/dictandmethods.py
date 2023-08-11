marks = {"Wasim": 100, "Aditya": 90, "Tauhid": 80}
print(marks["Wasim"])
marks["Riju"] = 70
print(marks)
print(marks.get("Riju Mondal"))  # It will not give error
print(marks.keys())
print(marks.values())
print(marks.items())
