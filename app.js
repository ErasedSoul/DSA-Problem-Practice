var name =  prompt('Handle name','');

const codeforces_url = 'https://codeforces.com/api/user.status?handle='+name+'&from=1&count=20';


fetch(codeforces_url)
.then(data=>{ return data.json()})
.then(res=>{
    document.getElementById('handle').innerHTML = name;
    //document.getElementById('problems').innerHTML += ('<p>'+res+'</p>');
    console.log(res);
    var obj = res.result;
    var i;
    for(i = 0; i < 10;i++){
        var act = obj[i];
        var problem_name = act.problem.name;
        var index = act.problem.index;
        document.getElementById('problems').innerHTML += ('<p>'+i+') '+index+' '+act.problem.name+' '+act.problem.rating+' '+act.verdict+'</p>');
    }
  
});
